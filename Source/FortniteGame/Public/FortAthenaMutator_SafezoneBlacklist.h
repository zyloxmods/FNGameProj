#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator.h"
#include "HotfixableBlacklistLiteralLocations.h"
#include "FortAthenaMutator_SafezoneBlacklist.generated.h"

class UBlacklistEntryBase;

UCLASS(Blueprintable, Config=Game)
class AFortAthenaMutator_SafezoneBlacklist : public AFortAthenaMutator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MasterDisableSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBlacklistEntryBase*> BlacklistEntries;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> HotfixBlacklistPoiTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHotfixableBlacklistLiteralLocations> HotfixBlacklistLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBlacklistEntryBase*> HotfixedEntries;
    
public:
    AFortAthenaMutator_SafezoneBlacklist();
};

