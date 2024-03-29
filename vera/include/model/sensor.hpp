#ifndef SENSOR_HPP
#define SENSOR_HPP

/**
 *	\file			sensor.hpp
 *	\brief			Header of Sensor class
 *
 *					This header contains useful class that manages sensors
 *
 *  \details        System :                Vera GUI
 *                  Component Name :        vera
 *                  Status :                Version 1.0.0 Release 1
 *                  Language :              C++
 * 
 *                  Platform Dependencies:  GNU/Linux, Windows, MacOS
 * 
 *  \copyright      GPLv3+ : GNU GPL version 3 or later
 *                  Licencied Material - Property of IMT ATLANTIQUE
 *                  © Copyright - UHA - ENSISA 2020
 * 
 *  \author         Hethsron Jedaël BOUEYA (hethsron-jedael.boueya@uha.fr)
 * 
 *  \bug            No known bug to date
 *  \date           21th May 2020
 */

#include <QtCore/QtCore>
#include <model/type.hpp>
#include <iostream>

class Sensor
{
    public:
        /**
         * @fn      Sensor
         * @brief   Default constructor of class
         */
        Sensor();

        /**
         * @fn      Sensor
         * @brief   Parameterized constructor of class
         * 
         * @param[in]       category        Type of sensor
         * @param[in]       key             Sensor name pattern regex
         * @param[in]       cfg             Configuration data of sensors database
         */
        Sensor(Type category, const QString& key, const QJsonDocument& cfg);

        /**
         * @fn      Sensor
         * @brief   Copy constructor of class
         * 
         * @param[in]       other       Sensor instance
         */
        Sensor(const Sensor& other);

        /**
         * @fn      Sensor
         * @brief   Copy constructor of class
         * 
         * @param[in]       ptr         Null instance
         */
        Sensor(std::nullptr_t ptr);

        /**
         * @fn      ~Sensor
         * @brief   Destructor of class
         */
        virtual ~Sensor();

        /**
         * @fn      getType
         * @brief   Virtual function that returns the sensor category
         * 
         * @return          Sensor category
         */
        virtual Type getType() const;

        /**
         * @fn      getLocation
         * @brief   Virtual function that returns the default data directory location of sensor
         * 
         * @return          Default data directory location
         */
        virtual QString getLocation() const;

        /**
         * @fn      getStorage
         * @brief   Virtual function that returns the default storage tree
         * 
         * @return          Default storage tree
         */
        virtual QList<QStringList> getStorage() const;

        /**
         * @fn      count
         * @brief   Virtual function that returns the number of activities in the storage
         * 
         * @return          Number of activities in the storage
         */
        virtual int count() const;

        /**
         * @fn      count
         * @brief   Virtual function that returns the number of subjects at index position i of the activity in theeee storage
         * 
         * @param[in]       i           Index position of the activity in the storage
         * @return          Number of subjects at index position of the activity in the storage
         */
        virtual int count(int i) const;

        /**
         * @fn      isEmpty
         * @brief   Virtual function that returns true if location is empty, false otherwise
         * 
         * @return          true if location is empty, false otherwise
         */
        virtual bool isEmpty() const = 0;

        /**
         * @fn      operator=
         * @brief   Assignment operator overloading
         * 
         * @param[in]       other       Sensor instance
         * @return           Right Sensor instance
         */
        Sensor& operator=(const Sensor& other);

        /**
         * @fn      operator==
         * @brief   Equality operator overloading
         * 
         * @param[in]       other       Sensor instance
         * @return          true if sensors seems to be the same, false otherwise
         */
        bool operator==(const Sensor& other) const;

        /**
         * @fn      operator!=
         * @brief   Inequality operator overloading
         * 
         * @param[in]       other       Sensor instance
         * @return          true if sensors doesn't seem to be the same, false otherwise
         */
        bool operator!=(const Sensor& other) const;

    private:
        Type type;                              /*!< Sensor category */
        QString name;                           /*!< Sensor name pattern regex */
        QString location;                       /*!< Default data directory location */
        QList<QStringList> storage;             /*!< Default Sensor storage tree */
};

#endif // ! SENSOR_HPP