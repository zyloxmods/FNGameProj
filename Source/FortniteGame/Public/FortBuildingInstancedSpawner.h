#pragma once
#include "CoreMinimal.h"
#include "BuildingSMActor.h"
#include "Templates/SubclassOf.h"
#include "FortBuildingInstancedSpawner.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class AFortBuildingInstancedSpawner : public ABuildingSMActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingSMActor> BuildingToInstance;
    
public:
    AFortBuildingInstancedSpawner();
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerAdded(APlayerController* AddedPlayer);
    
};

