#pragma once
#include "CoreMinimal.h"
#include "ObjectCostAccountantFactory.h"
#include "JsonObjectCostAccountantFactory.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Editor)
class UJsonObjectCostAccountantFactory : public UObjectCostAccountantFactory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FilePath;
    
public:
    UJsonObjectCostAccountantFactory();
};

