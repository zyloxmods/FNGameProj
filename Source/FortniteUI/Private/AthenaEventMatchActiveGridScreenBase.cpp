#include "AthenaEventMatchActiveGridScreenBase.h"


void UAthenaEventMatchActiveGridScreenBase::OnTeamEliminated(int32 InSquadId) {
}


UAthenaEventMatchActiveGridScreenBase::UAthenaEventMatchActiveGridScreenBase() {
    this->TeamWidgetClass = NULL;
    this->MaxNumColumns = 0;
    this->MaxTeamCount = 0;
    this->MaxTeamSize = 0;
}

