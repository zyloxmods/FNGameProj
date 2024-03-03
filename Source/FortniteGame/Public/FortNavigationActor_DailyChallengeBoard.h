#pragma once
#include "CoreMinimal.h"
#include "FortEventLevelNavigationActor.h"
#include "FortNavigationActor_DailyChallengeBoard.generated.h"

class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API AFortNavigationActor_DailyChallengeBoard : public AFortEventLevelNavigationActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* S_NoteCard_Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* S_NoteCard_Middle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* S_NoteCard_Bottom;
    
public:
    AFortNavigationActor_DailyChallengeBoard();
};

