#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuildingActorTickManager.generated.h"

class ABuildingActor;

UCLASS(Blueprintable, MinimalAPI)
class ABuildingActorTickManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABuildingActor*> Buildings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABuildingActor*> BuildingsJustDisabledTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastBuildingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BuildingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxBuildingIndex;
    
public:
    ABuildingActorTickManager();
};

