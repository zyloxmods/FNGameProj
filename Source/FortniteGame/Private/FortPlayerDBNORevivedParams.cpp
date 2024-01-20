#include "FortPlayerDBNORevivedParams.h"

void UFortPlayerDBNORevivedParams::SetParams(AFortPlayerPawn* _RevivedPlayer, AController* _RevivedBy, UFortPlayerDBNORevivedParams*& ThisParam) {
}

void UFortPlayerDBNORevivedParams::BreakParams(AFortPlayerPawn*& _RevivedPlayer, AController*& _RevivedBy) {
}

UFortPlayerDBNORevivedParams::UFortPlayerDBNORevivedParams() {
    this->RevivedPlayer = NULL;
    this->RevivedBy = NULL;
}

