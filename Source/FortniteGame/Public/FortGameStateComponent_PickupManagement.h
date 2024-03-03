#pragma once
#include "CoreMinimal.h"
#include "GameStateComponent.h"
#include "FortPickupManagementInterface.h"
#include "PickupManagementSettings.h"
#include "FortGameStateComponent_PickupManagement.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortGameStateComponent_PickupManagement : public UGameStateComponent, public IFortPickupManagementInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupManagementSettings DefaultPickupManagementSettings;
    
public:
    UFortGameStateComponent_PickupManagement();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddManagedActor(AActor* ActorToManage, UPARAM(Ref) FString& BucketName, float Weight, bool bPerPlayer) override PURE_VIRTUAL(AddManagedActor,);
    
};

