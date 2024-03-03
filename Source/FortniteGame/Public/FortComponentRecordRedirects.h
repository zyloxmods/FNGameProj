#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ComponentRecordRedirect.h"
#include "FortComponentRecordRedirects.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class UFortComponentRecordRedirects : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentRecordRedirect> ComponentRecordRedirects;
    
public:
    UFortComponentRecordRedirects();
};

