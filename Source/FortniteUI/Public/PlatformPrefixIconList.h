#pragma once
#include "CoreMinimal.h"
#include "PlatformPrefixIcon.h"
#include "PlatformPrefixIconList.generated.h"

USTRUCT(BlueprintType)
struct FPlatformPrefixIconList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlatformPrefixIcon> PlatformPrefixIcons;
    
    FORTNITEUI_API FPlatformPrefixIconList();
};

