#pragma once
#include "CoreMinimal.h"
#include "FortCuriePendingElectricityArcRequest.generated.h"

class UFortCurieComponent;

USTRUCT(BlueprintType)
struct FFortCuriePendingElectricityArcRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCurieComponent* RequestingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExecutionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstIteration;
    
    FORTNITEGAME_API FFortCuriePendingElectricityArcRequest();
};

