#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccountantConfiguration.generated.h"

class UObjectCostAccountantFactory;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class UAccountantConfiguration : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObjectCostAccountantFactory> AccountantFactoryClass;
    
public:
    UAccountantConfiguration();
};

