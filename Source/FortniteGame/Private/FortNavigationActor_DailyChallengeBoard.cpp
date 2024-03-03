#include "FortNavigationActor_DailyChallengeBoard.h"
#include "Components/StaticMeshComponent.h"

AFortNavigationActor_DailyChallengeBoard::AFortNavigationActor_DailyChallengeBoard() {
    this->S_NoteCard_Top = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh_TopNotecard"));
    this->S_NoteCard_Middle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh_MiddleNotecard"));
    this->S_NoteCard_Bottom = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh_BottomNotecard"));
}

