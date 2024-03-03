#pragma once
#include "CoreMinimal.h"
#include "ObjectCostAccountantFactory.h"
#include "AssetObjectCostAccountantFactory.generated.h"

class UAssetObjectCostAccountant;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class UAssetObjectCostAccountantFactory : public UObjectCostAccountantFactory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAssetObjectCostAccountant> Asset;
    
public:
    UAssetObjectCostAccountantFactory();
};

