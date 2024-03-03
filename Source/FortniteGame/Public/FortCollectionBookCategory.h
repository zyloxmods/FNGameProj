#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCollectionBookCategory.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCollectionBookCategory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCategoryUIExpanded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CategoryDataRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> ChildrenPageIds;
    
public:
    UFortCollectionBookCategory();
};

