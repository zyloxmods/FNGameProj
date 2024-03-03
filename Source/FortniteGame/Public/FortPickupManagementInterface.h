#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortPickupManagementInterface.generated.h"

class AActor;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UFortPickupManagementInterface : public UInterface {
    GENERATED_BODY()
};

class IFortPickupManagementInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual void AddManagedActor(AActor* ActorToManage, UPARAM(Ref) FString& BucketName, float Weight, bool bPerPlayer) PURE_VIRTUAL(AddManagedActor,);
    
};

