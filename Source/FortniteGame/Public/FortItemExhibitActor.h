#pragma once
#include "CoreMinimal.h"
#include "FortExhibitActor.h"
#include "FortItemExhibitActor.generated.h"

class AFortPickup;

UCLASS(Blueprintable)
class AFortItemExhibitActor : public AFortExhibitActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString ItemInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPickup* ExhibitItem;
    
public:
    AFortItemExhibitActor();
};

