#pragma once
#include "CoreMinimal.h"
#include "BuildingSMActor.h"
#include "BuildingFloor.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ABuildingFloor : public ABuildingSMActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldIgnoreForHorizontalHotspotSearch: 1;
    
public:
    ABuildingFloor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBalcony() const;
    
};

