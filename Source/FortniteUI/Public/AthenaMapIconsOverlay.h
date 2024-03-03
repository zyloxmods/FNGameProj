#pragma once
#include "CoreMinimal.h"
#include "Components/Overlay.h"
#include "Blueprint/UserWidgetPool.h"
#include "Templates/SubclassOf.h"
#include "AthenaMapIconsOverlay.generated.h"

class UAthenaChallengeIndicatorCache;
class UAthenaMapNavigableIconSingleChallenge;
class UAthenaMapNavigableIconStackOfChallenges;
class UAthenaMapNavigableIconStackOfNoLocationChallenges;

UCLASS(Blueprintable)
class UAthenaMapIconsOverlay : public UOverlay {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaMapNavigableIconSingleChallenge> AthenaMapNavigableIconSingleChallengeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaMapNavigableIconStackOfChallenges> AthenaMapNavigableIconStackOfChallengesClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaMapNavigableIconStackOfNoLocationChallenges> AthenaMapNavigableIconStackOfNoLocationChallengesClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaChallengeIndicatorCache* ChallengeIndicatorCache;
    
    UPROPERTY( EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUserWidgetPool WidgetsPool;
    
public:
    UAthenaMapIconsOverlay();
};

