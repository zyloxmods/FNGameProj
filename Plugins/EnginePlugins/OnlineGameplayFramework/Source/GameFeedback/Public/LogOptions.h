#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LogSubmitOptions.h"
#include "LogOptions.generated.h"

UCLASS(Blueprintable, Config=Game)
class ULogOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLogSubmitOptions> LogOptions;
    
    ULogOptions();
};

