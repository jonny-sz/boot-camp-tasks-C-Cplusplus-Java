#ifndef ARMY_DAEMON_H
#define ARMY_DAEMON_H

#include "Unit.h"
#include "../Actions/DaemonAction.h"

class Warlock;

class Daemon : public Unit {
    public:
        Daemon(Warlock* master, const std::string& name);
        ~Daemon();
};

#endif //ARMY_DAEMON_H
