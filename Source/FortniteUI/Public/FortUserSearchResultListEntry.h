#pragma once
#include "CoreMinimal.h"
#include "FortPresenceUserListEntry.h"
#include "FortUserSearchResultListEntry.generated.h"

class UCommonRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UFortUserSearchResultListEntry : public UFortPresenceUserListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_NameMatchesAndMutuals;
    
public:
    UFortUserSearchResultListEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNamePlatformAndMutuals(const FText& DisplayName, const FText& Platform, int32 MutualCount);
    
};

