#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BlacklistEntryBase.h"
#include "BlacklistEntry_PoiTagQuery.generated.h"

class UWorld;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBlacklistEntry_PoiTagQuery : public UBlacklistEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQuery;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* WorldReference;
    
public:
    UBlacklistEntry_PoiTagQuery();
};

