#include "Daemon.h"

Daemon::Daemon(Warlock* master, const std::string& name) : Unit(name) {
    this->action = new DaemonAction(master, 100, 30, "Daemon");
}

Daemon::~Daemon() {
    delete this->action;
}
