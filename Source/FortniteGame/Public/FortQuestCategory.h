#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCategoryTableRow.h"
#include "FortQuestCategory.generated.h"

class UFortQuestItem;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortQuestCategory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestItem*> CurrentQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExpanded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCategoryTableRow CategoryInfo;
    
public:
    UFortQuestCategory();
    UFUNCTION(BlueprintCallable)
    bool HasUnseenQuests();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUnseenQuestCount();
    
};

