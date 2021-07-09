#ifndef LOG_H
#define LOG_H

#include <QDebug>

#define INFO(x) qDebug() << "[INFO]" << x;
#define WARNING(x) qWarning() << "[WARN]" << x;
#define CRITICAL(x) qCritical() << "[CRITICAL]" << x;

#endif // LOG_H
