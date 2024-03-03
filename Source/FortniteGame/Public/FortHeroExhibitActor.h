#pragma once
#include "CoreMinimal.h"
#include "FortExhibitActor.h"
#include "FortHeroExhibitActor.generated.h"

class AFortPlayerPawn;
class UFortHeroType;

UCLASS(Blueprintable)
class AFortHeroExhibitActor : public AFortExhibitActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHeroType* HeroType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* HeroExhibitPawn;
    
public:
    AFortHeroExhibitActor();
};

