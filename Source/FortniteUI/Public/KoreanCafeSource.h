#pragma once
#include "CoreMinimal.h"
#include "KoreanCafeJsonObject.h"
#include "KoreanCafeSource.generated.h"

USTRUCT(BlueprintType)
struct FKoreanCafeSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString __locale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoreanCafeJsonObject Cafe_Info;
    
    FORTNITEUI_API FKoreanCafeSource();
};

