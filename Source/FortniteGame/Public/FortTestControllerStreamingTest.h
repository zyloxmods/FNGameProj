#pragma once
#include "CoreMinimal.h"
#include "FortTestControllerBase.h"
#include "StreamingTestSkydivePath.h"
#include "FortTestControllerStreamingTest.generated.h"

UCLASS(Blueprintable, Config=AutomationConfig)
class UFortTestControllerStreamingTest : public UFortTestControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStreamingTestSkydivePath> SkydivePathArray;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostSkydiveMinWait;
    
public:
    UFortTestControllerStreamingTest();
};

