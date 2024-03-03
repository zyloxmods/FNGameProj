#include "FortCommunityVotingTileCandidate.h"

void UFortCommunityVotingTileCandidate::OnImageAnimationFinished() {
}


UFortCommunityVotingTileCandidate::UFortCommunityVotingTileCandidate() : UUserWidget(FObjectInitializer::Get()) {
    this->Image_Candidate = NULL;
    this->LoadGuard = NULL;
}

