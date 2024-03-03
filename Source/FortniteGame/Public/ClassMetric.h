#pragma once
#include "CoreMinimal.h"
#include "ObjectMetric_Legacy.h"
#include "ClassMetric.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class UClassMetric : public UObjectMetric_Legacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> SoftTargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* TargetClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalNumberOfInstances;
    
public:
    UClassMetric();
};

