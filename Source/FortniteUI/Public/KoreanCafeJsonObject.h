#pragma once
#include "CoreMinimal.h"
#include "KoreanCafeData.h"
#include "KoreanCafeJsonObject.generated.h"

USTRUCT(BlueprintType)
struct FKoreanCafeJsonObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoreanCafeData> Cafes;
    
    FORTNITEUI_API FKoreanCafeJsonObject();
};

