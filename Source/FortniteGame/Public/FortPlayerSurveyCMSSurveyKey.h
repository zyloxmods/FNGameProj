#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSSurveyKey.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortPlayerSurveyCMSSurveyKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
public:
    FFortPlayerSurveyCMSSurveyKey();
};
FORCEINLINE uint32 GetTypeHash(const FFortPlayerSurveyCMSSurveyKey) { return 0; }

