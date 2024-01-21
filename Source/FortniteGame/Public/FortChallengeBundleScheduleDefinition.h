#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ChallengeGiftBoxData.h"
#include "FortAccountItemDefinition.h"
#include "FortChallengeBundleScheduleEntry.h"
#include "FortChallengeBundleScheduleDefinition.generated.h"

class UFortChallengeBundleItemDefinition;
class UUserWidget;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortChallengeBundleScheduleDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortChallengeBundleScheduleEntry> ScheduleEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalendarEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalendarEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredMcpContextTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeGiftBoxData GrantedBundleGiftBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CleanUpOnBundleCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ChallengeDetailsTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SourceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSeperateEachBundleForDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSeperateEachBundleForTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnlockTextOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UUserWidget>> CustomChallengeHeaderExtensions;
    
public:
    UFortChallengeBundleScheduleDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSortPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumBundles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEventName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCalendarEventName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFortChallengeBundleItemDefinition*> GetBundleDefinitions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesChallengeBundleScheduleExpire() const;
    
};

