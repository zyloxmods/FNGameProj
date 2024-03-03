#pragma once
#include "CoreMinimal.h"
#include "EFortCurieApplicationEvent.h"
#include "EFortCurieExecutionType.h"
#include "FortCurieExecutionFilter.h"
#include "FortCurieExecutionParams.h"
#include "FortCurieExecutionEntry.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieExecutionEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCurieExecutionType ExecutionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCurieApplicationEvent ApplicationEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCurieExecutionFilter ExecutionFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCurieExecutionParams ExecutionParameters;
    
public:
    FORTNITEGAME_API FFortCurieExecutionEntry();
};

