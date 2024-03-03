#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortMusicManagerBank.generated.h"

class UFortMusicCombatBank;
class UFortMusicTimeOfDayBank;

UCLASS(Blueprintable)
class UFortMusicManagerBank : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMusicTimeOfDayBank* TimeOfDayBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMusicCombatBank* CombatBank;
    
    UFortMusicManagerBank();
};

