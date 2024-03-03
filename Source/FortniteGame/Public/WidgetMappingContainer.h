#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WidgetMapping.h"
#include "WidgetMappingContainer.generated.h"

USTRUCT(BlueprintType)
struct FWidgetMappingContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LegacyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetMapping DefaultMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWidgetMapping> ContextMappings;
    
    FORTNITEGAME_API FWidgetMappingContainer();
};

