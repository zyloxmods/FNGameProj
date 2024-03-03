#pragma once
#include "CoreMinimal.h"
#include "BuildingProp.h"
#include "OnBuildingAttributeSetHealthChangedSignatureDelegate.h"
#include "BuildingProp_DestructionObject.generated.h"

UCLASS(Blueprintable)
class ABuildingProp_DestructionObject : public ABuildingProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildingAttributeSetHealthChangedSignature OnBuildingAttributeSetHealthChangedDelegate;
    
    ABuildingProp_DestructionObject();
private:
    UFUNCTION(BlueprintCallable)
    void OnBuildingAttributeSetHealthChanged();
    
};

