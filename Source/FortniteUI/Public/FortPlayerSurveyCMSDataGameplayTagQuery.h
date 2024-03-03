#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyCMSDataGameplayTagQueryExprType.h"
#include "FortPlayerSurveyCMSDataGameplayTagQuery.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataGameplayTagQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerSurveyCMSDataGameplayTagQueryExprType T;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> N;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataGameplayTagQuery();
};

