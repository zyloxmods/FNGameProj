#pragma once
#include "CoreMinimal.h"
#include "DynamicBackgrounds.h"
#include "DynamicBackgroundsSource.generated.h"

USTRUCT(BlueprintType)
struct FDynamicBackgroundsSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString __locale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastModified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicBackgrounds Backgrounds;
    
    FORTNITEUI_API FDynamicBackgroundsSource();
};

