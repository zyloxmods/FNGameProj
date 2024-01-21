#pragma once
#include "CoreMinimal.h"
#include "FortReplaySpectatorPawnBase.h"
#include "ArenaCamPawn.generated.h"

class AFortArenaCamera;

UCLASS(Blueprintable)
class AArenaCamPawn : public AFortReplaySpectatorPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortArenaCamera*> ArenaCams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrArenaCamIdx;
    
public:
    AArenaCamPawn();
};

