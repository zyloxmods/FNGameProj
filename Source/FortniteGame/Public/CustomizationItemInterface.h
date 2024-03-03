#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "McpVariantChannelInfo.h"
#include "CustomizationItemInterface.generated.h"

class UAthenaCosmeticItemDefinition;
class USceneComponent;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class FORTNITEGAME_API UCustomizationItemInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API ICustomizationItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetCustomizationCosmeticItemAndVariants(UAthenaCosmeticItemDefinition* NewCosmeticItemDefinition, const TArray<FMcpVariantChannelInfo>& InOverrideVariants) PURE_VIRTUAL(SetCustomizationCosmeticItemAndVariants,);
    
    UFUNCTION(BlueprintCallable)
    virtual void ResetCustomizationCosmeticItemAndVariants(UAthenaCosmeticItemDefinition* NewCosmeticItemDefinition, const TArray<FMcpVariantChannelInfo>& InOverrideVariants) PURE_VIRTUAL(ResetCustomizationCosmeticItemAndVariants,);
    
    UFUNCTION(BlueprintCallable)
    virtual USceneComponent* GetCustomizationItemRotatableSceneComponent() const PURE_VIRTUAL(GetCustomizationItemRotatableSceneComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual UAthenaCosmeticItemDefinition* GetCustomizationCosmeticItem() const PURE_VIRTUAL(GetCustomizationCosmeticItem, return NULL;);
    
};

