#pragma once
#include "CoreMinimal.h"
#include "BuildingProp.h"
#include "FortCheckPointCosmeticActor.generated.h"

class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class FORTNITEGAME_API AFortCheckPointCosmeticActor : public ABuildingProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> MidPointMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> EndPointMeshes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CheckPointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsEndPoint;
    
public:
    AFortCheckPointCosmeticActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsEndPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsEndPointChanged();
    
};

