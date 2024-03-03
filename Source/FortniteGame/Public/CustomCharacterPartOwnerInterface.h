#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "CustomCharacterPartOwnerInterface.generated.h"

class USkeletalMeshComponent;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UCustomCharacterPartOwnerInterface : public UInterface {
    GENERATED_BODY()
};

class ICustomCharacterPartOwnerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void PlayAnimationsMatchingQuery(const FGameplayTagQuery& TagQueryToMatch) PURE_VIRTUAL(PlayAnimationsMatchingQuery,);
    
    UFUNCTION(BlueprintCallable)
    virtual USkeletalMeshComponent* GetCustomizationRootSkeletalMeshComponent() const PURE_VIRTUAL(GetCustomizationRootSkeletalMeshComponent, return NULL;);
    
};

