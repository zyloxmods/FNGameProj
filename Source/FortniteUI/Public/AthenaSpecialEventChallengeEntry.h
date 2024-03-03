#pragma once
#include "CoreMinimal.h"
#include "AthenaChallengeEntry.h"
#include "AthenaSpecialEventChallengeEntry.generated.h"

class UFortEventDateTimeTextBlock;
class UProgressBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpecialEventChallengeEntry : public UAthenaChallengeEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefreshRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_ChallengeProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEventDateTimeTextBlock* Text_ChallengeTimer;
    
public:
    UAthenaSpecialEventChallengeEntry();
};

