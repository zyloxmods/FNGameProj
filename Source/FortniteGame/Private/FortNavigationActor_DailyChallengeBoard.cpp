#include "FortNavigationActor_DailyChallengeBoard.h"
#include "Components/StaticMeshComponent.h"

AFortNavigationActor_DailyChallengeBoard::AFortNavigationActor_DailyChallengeBoard() {
    S_NoteCard_Top = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh_TopNotecard"));
    S_NoteCard_Middle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh_MiddleNotecard"));
    S_NoteCard_Bottom = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh_BottomNotecard"));
}

