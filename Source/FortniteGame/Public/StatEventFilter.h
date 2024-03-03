#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortQuestObjectiveStatEvent.h"
#include "StatEventFilter.generated.h"

USTRUCT(BlueprintType)
struct FStatEventFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuestObjectiveStatEvent StatEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetTagsQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SourceTagsQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ContextTagsQuery;
    
    FORTNITEGAME_API FStatEventFilter();
};

