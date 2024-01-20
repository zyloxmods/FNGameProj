#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortGameplayAbility_Action.h"
#include "FortGameplayAbility_AIPortal.generated.h"

class ABuildingSMActor;

UCLASS(Blueprintable)
class UFortGameplayAbility_AIPortal : public UFortGameplayAbility_Action {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PortalDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PortalLifespan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABuildingSMActor*> NoCollisionBuildings;
    
public:
    UFortGameplayAbility_AIPortal();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ModifyCollisions();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasPortalOutPoint() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FVector GetPortalOutPoint() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FVector GetPortalInPoint() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    ABuildingSMActor* GetPortalBuilding() const;
    
};

