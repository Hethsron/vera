#include <model/measurements.hpp>

Measurements::Measurements()
    : name(QString()), time(QVector<double>()), accelX(QVector<double>()), accelY(QVector<double>()), accelZ(QVector<double>()), gyroX(QVector<double>()), gyroY(QVector<double>()), gyroZ(QVector<double>()) {}

Measurements::Measurements(const QString& key)
    : name(key), time(QVector<double>()), accelX(QVector<double>()), accelY(QVector<double>()), accelZ(QVector<double>()), gyroX(QVector<double>()), gyroY(QVector<double>()), gyroZ(QVector<double>()) {}

Measurements::Measurements(const Measurements& other)
    :name(other.name), time(other.time), accelX(other.accelX), accelY(other.accelY), accelZ(other.accelZ), gyroX(other.gyroX), gyroY(other.gyroY), gyroZ(other.gyroZ) {}

Measurements::Measurements(std::nullptr_t)
    : name(QString()), time(QVector<double>()), accelX(QVector<double>()), accelY(QVector<double>()), accelZ(QVector<double>()), gyroX(QVector<double>()), gyroY(QVector<double>()), gyroZ(QVector<double>()) {}

Measurements::~Measurements() {
    // Check if data is not empty
    if (!isEmpty()) {
        // Clear all data
        clear();
    }
}

QString Measurements::getName() const {
    return name;
}

QVector<double> Measurements::getTime() const {
    return time;
}

QVector<double> Measurements::getAccelX() const {
    return accelX;
}

QVector<double> Measurements::getAccelY() const {
    return accelY;
}

QVector<double> Measurements::getAccelZ() const {
    return accelZ;
}

QVector<double> Measurements::getGyroX() const {
    return gyroX;
}

QVector<double> Measurements::getGyroY() const {
    return gyroY;
}

QVector<double> Measurements::getGyroZ() const {
    return gyroZ;
}

double Measurements::getMaxAccelX() const {
    double value = accelX.at(0);

    for (int i = 0; i < accelX.size(); ++i) {
        if (accelX.at(i) > value) {
            value = accelX.at(i);
        }
    }

    return value;
}

double Measurements::getMaxAccelY() const {
    double value = accelY.at(0);

    for (int i = 0; i < accelY.size(); ++i) {
        if (accelY.at(i) > value) {
            value = accelY.at(i);
        }
    }

    return value;
}

double Measurements::getMaxAccelZ() const {
    double value = accelZ.at(0);

    for (int i = 0; i < accelZ.size(); ++i) {
        if (accelZ.at(i) > value) {
            value = accelZ.at(i);
        }
    }

    return value;
}

double Measurements::getMinAccelX() const {
    double value = accelX.at(0);
    
    for (int i = 0; i < accelX.size(); ++i) {
        if (accelX.at(i) < value) {
            value = accelX.at(i);
        }
    }

    return value;
}

double Measurements::getMinAccelY() const {
    double value = accelY.at(0);

    for (int i = 0; i < accelY.size(); ++i) {
        if (accelY.at(i) < value) {
            value = accelY.at(i);
        }
    }

    return value;
}

double Measurements::getMinAccelZ() const {
    double value = accelZ.at(0);

    for (int i = 0; i < accelZ.size(); ++i) {
        if (accelZ.at(i) < value) {
            value = accelZ.at(i);
        }
    }

    return value;
}

double Measurements::getMaxGyroX() const {
    double value = gyroX.at(0);

    for (int i = 0; i < gyroX.size(); ++i) {
        if (gyroX.at(i) > value) {
            value = gyroX.at(i);
        }
    }

    return value;
}

double Measurements::getMaxGyroY() const {
    double value = gyroY.at(0);

    for (int i = 0; i < gyroY.size(); ++i) {
        if (gyroY.at(i) > value) {
            value = gyroY.at(i);
        }
    }

    return value;
}

double Measurements::getMaxGyroZ() const {
    double value = gyroZ.at(0);

    for (int i = 0; i < gyroZ.size(); ++i) {
        if (gyroZ.at(i) > value) {
            value = gyroZ.at(i);
        }
    }

    return value;
}

double Measurements::getMinGyroX() const {
    double value = gyroX.at(0);

    for (int i = 0; i < gyroX.size(); ++i) {
        if (gyroX.at(i) < value) {
            value = gyroX.at(i);
        }
    }

    return value;
}

double Measurements::getMinGyroY() const {
    double value = gyroY.at(0);

    for (int i = 0; i < gyroY.size(); ++i) {
        if (gyroY.at(i) < value) {
            value = gyroY.at(i);
        }
    }

    return value;
}

double Measurements::getMinGyroZ() const {
    double value = gyroZ.at(0);

    for (int i = 0; i < gyroZ.size(); ++i) {
        if (gyroZ.at(i) < value) {
            value = gyroZ.at(i);
        }
    }

    return value;
}

double Measurements::getMaxTime() const {
    double value = time.at(0);

    for (int i = 0; i < time.size(); ++i) {
        if (time.at(i) > value) {
            value = time.at(i);
        }
    }

    return value;
}

double Measurements::getMinTime() const {
    double value = time.at(0);

    for (int i = 0; i < time.size(); ++i) {
        if (time.at(i) < value) {
            value = time.at(i);
        }
    }

    return value;
}

double Measurements::getMaxAccel() const {
    double value = accelX.at(0);

    for (int i = 0; i < accelX.size(); ++i) {
        if (accelX.at(i) > value) {
            value = accelX.at(i);
        }
    }

    for (int i = 0; i < accelY.size(); ++i) {
        if (accelY.at(i) > value) {
            value = accelY.at(i);
        }
    }

    for (int i = 0; i < accelZ.size(); ++i) {
        if (accelZ.at(i) > value) {
            value = accelZ.at(i);
        }
    }

    return value;
}

double Measurements::getMinAccel() const {
    double value = accelX.at(0);

    for (int i = 0; i < accelX.size(); ++i) {
        if (accelX.at(i) < value) {
            value = accelX.at(i);
        }
    }

    for (int i = 0; i < accelY.size(); ++i) {
        if (accelY.at(i) < value) {
            value = accelY.at(i);
        }
    }

    for (int i = 0; i < accelZ.size(); ++i) {
        if (accelZ.at(i) < value) {
            value = accelZ.at(i);
        }
    }

    return value;
}

double Measurements::getMaxGyro() const {
    double value = gyroX.at(0);

    for (int i = 0; i < gyroX.size(); ++i) {
        if (gyroX.at(i) > value) {
            value = gyroX.at(i);
        }
    }

    for (int i = 0; i < gyroY.size(); ++i) {
        if (gyroY.at(i) > value) {
            value = gyroY.at(i);
        }
    }

    for (int i = 0; i < gyroZ.size(); ++i) {
        if (gyroZ.at(i) > value) {
            value = gyroZ.at(i);
        }
    }

    return value;
}

double Measurements::getMinGyro() const {
    double value = gyroX.at(0);

    for (int i = 0; i < gyroX.size(); ++i) {
        if (gyroX.at(i) < value) {
            value = gyroX.at(i);
        }
    }

    for (int i = 0; i < gyroY.size(); ++i) {
        if (gyroY.at(i) < value) {
            value = gyroY.at(i);
        }
    }

    for (int i = 0; i < gyroZ.size(); ++i) {
        if (gyroZ.at(i) < value) {
            value = gyroZ.at(i);
        }
    }

    return value;
}

bool Measurements::isEmpty() const {
    return (time.isEmpty() && accelX.isEmpty() && accelY.isEmpty() && accelZ.isEmpty() && gyroX.isEmpty() && gyroY.isEmpty() && gyroZ.isEmpty());
}

void Measurements::clear() {
    // Clear time data
    time.clear();

    // Clear accelorometer data
    accelX.clear();
    accelY.clear();
    accelZ.clear();

    // Clear gyroscope data
    gyroX.clear();
    gyroY.clear();
    gyroZ.clear();
}

void Measurements::append(double ms, const QJsonObject& obj) {
    // Appends time data
    time.append(ms);

    // Appends accelerometer data
    accelX.append(obj.value(QString("accel_x")).toDouble());
    accelY.append(obj.value(QString("accel_y")).toDouble());
    accelZ.append(obj.value(QString("accel_z")).toDouble());

    // Appends gyroscope data
    gyroX.append(obj.value(QString("gyro_x")).toDouble());
    gyroY.append(obj.value(QString("gyro_y")).toDouble());
    gyroZ.append(obj.value(QString("gyro_z")).toDouble());
}

Measurements& Measurements::operator=(const Measurements& other) {
    // Avoid self assignment
    if (this != &other) {
        if (other.name != name) {
            name = other.name;
        }
    }
    return *this;
}

bool Measurements::operator==(const Measurements& other) const {
    return (other.name == name);
}

bool Measurements::operator!=(const Measurements& other) const {
    return (other.name != name);
}