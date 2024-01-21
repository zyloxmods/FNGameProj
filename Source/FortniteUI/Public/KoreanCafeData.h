#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "KoreanCafeData.generated.h"

USTRUCT(BlueprintType)
struct FKoreanCafeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Korean_Cafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Korean_Cafe_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Korean_Cafe_Description;
    
    FORTNITEUI_API FKoreanCafeData();
};

