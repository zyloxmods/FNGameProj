#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AthenaReplayBrowserRowData.h"
#include "AthenaReplayBrowserRowProxyInstance.generated.h"

UCLASS(Blueprintable)
class UAthenaReplayBrowserRowProxyInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAthenaReplayBrowserRowData RowData;
    
    UAthenaReplayBrowserRowProxyInstance();
};

