#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ComicBook.generated.h"

class UFortComicPage;

UCLASS(Blueprintable)
class UComicBook : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortComicPage*> Pages;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExportStartingWithPageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PagesToExport;
    
public:
    UComicBook();
private:
    UFUNCTION(BlueprintCallable)
    void CopyToClipboardForCMS();
    
};

