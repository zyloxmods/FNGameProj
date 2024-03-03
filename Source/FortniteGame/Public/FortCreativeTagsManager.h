#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCreativeTagsManager.generated.h"

class UDataTable;
class UFortItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCreativeTagsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* CreativeTagsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* CreativeTagCategoriesTable;
    
public:
    UFortCreativeTagsManager();
    UFUNCTION(BlueprintCallable)
    static TArray<FText> GetCreativeTagsForItem(UFortItemDefinition* ItemDefinition);
    
};

